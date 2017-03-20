public class BusinessLookUp {
	public BusinessService getBusinessService(String serviceType){
		if (serviceType.equalsIgnoreCase("EJB")) {
			return new EJBServices();
		}else{
			return new JSMServices();
		}
	}
}
