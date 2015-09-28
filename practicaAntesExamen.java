/**
 * @(#)practicaAntesExamen.java
 *
 *
 * @author 
 * @version 1.00 2015/7/20
 */
import java.util.*;

class ClaseGenerica<T>{
	T obj;
	public ClaseGenerica(T o){
		obj = o;
	}
	public void classType(){
		System.out.println("El tipo de T es: "+obj.getClass().getName());
	}
}


public class practicaAntesExamen {
	public static void main (String[] args) {
    	ClaseGenerica<Integer> intObj = new ClaseGenerica<Integer>(88);
    	intObj.classType();
    	
    	ClaseGenerica<String> strObj = new ClaseGenerica<String>("Test");
    	strObj.classType(); 
    }
    
    
}