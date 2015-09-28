import java.util.*;
import javax.swing.*;
import java.awt.event.*;

public class Login{
	

	/*public void ingresar(){
		System.out.println( "Ingrese el usuario" );
		usuario = sc.next();
		System.out.println( "Ingrese la contrasenia" );
		contrasenia = sc.next();
	}*/
	public void ingresar(){
	

		Sistema sis = new Sistema();
		boolean m;
		Scanner sc = new Scanner(System.in);
		String usuario;
		String contrasenia;
		Login a = new Login();
		System.out.println( "Ingrese el usuario" );
		usuario = sc.next();
		System.out.println( "Ingrese la contrasenia" );
		contrasenia = sc.next();	

		m = a.validacion(usuario, contrasenia);
		if(m){
			System.out.println("Usted ha ingresado al Sistema");
			sis.opciones();
		} else{
			System.out.println( "Usuario o password incorrect" );
		}
	}

	public boolean validacion(String usuario,String contrasenia){
		String usr = new String("jairxserfer");
		String ctr = new String("rajahajo");
		if( usuario.equals(usr) ){
			if( contrasenia.equals(ctr)){
				return true;
				//System.out.println( "Usted ha ingresado al Sistema" );

			} else{
				return false;
				//System.out.println( "Usuario o password incorrect" );
			}
		} else{
				return false;
			//System.out.println("aas");
		}
	}

}