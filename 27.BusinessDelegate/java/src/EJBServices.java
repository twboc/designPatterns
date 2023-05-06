public class EJBServices implements BusinessService {
	@Override
	public void doProcessing(){
		System.out.println("Processing task by invoking EJB Service");
	}
}
