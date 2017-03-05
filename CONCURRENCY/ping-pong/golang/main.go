package main

import (
	"fmt"
	"time"
)


type Ball struct{ hits int; }
func player(name string, table chan *Ball){

	for {
	
		ball := <-table;
		ball.hits++;
		fmt.Println(name, ball.hits);
		time.Sleep(100 * time.Millisecond);
		table <- ball;	
	
	}

}

func main() {
	fmt.Println("Ping pong example");
	
	table := make(chan *Ball);
	
	go player("Mr. Ping", table);
	go player("Mr. Pong", table);
	
	
	table <- new(Ball); //  if you comment this section golang will detect a deadlock and will notify you about it
	
	time.Sleep(2 * time.Second);
	
	<-table // this ends the game; it si grabbed and not passed further
	
}
