
public class main {
	
	private static AbstractLogger getChainOfLoggers(){
		AbstractLogger errorLogger = new ErrorLogger(AbstractLogger.ERROR);
		AbstractLogger fileLogger = new FileLogger(AbstractLogger.DEBUG);
		AbstractLogger consoleLogger = new ConsoleLogger(AbstractLogger.INFO);
		errorLogger.setNextLogger(fileLogger);
		fileLogger.setNextLogger(consoleLogger);
		return errorLogger;
	}
	
	public static void main(String[] args){
		
		System.out.println("This is Chain of Responsibility pattern");
		AbstractLogger chainLogger = getChainOfLoggers();
		chainLogger.logMessage(AbstractLogger.INFO, "This is an information.");
		chainLogger.logMessage(AbstractLogger.DEBUG, "This is a debug level information.");
		chainLogger.logMessage(AbstractLogger.ERROR, "This is an error information.");
		
	}

}
