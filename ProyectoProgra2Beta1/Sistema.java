import java.util.*;

public class Sistema{
	ArrayList<String> nombre = new ArrayList<String>();
	ArrayList<String> cod = new ArrayList<String>();
	ArrayList<String> ciudad = new ArrayList<String>(); 
	int cont = 0;

	public void registrar(){
		Scanner sc = new Scanner(System.in);
		String nomb;
		nomb = sc.next();
		String co;
		co = sc.next();
		String ciud;
		ciud = sc.next();
		nombre.add(nomb);
		cod.add(co);
		ciudad.add(ciud);
		cont++;
		System.out.println("El numero del registro es: "+cont);
	}

	public void eliminar(){
		Scanner sc = new Scanner(System.in);
		int m;
		System.out.println( "Ingrese el registro a eliminar" );
		m = sc.nextInt();
		nombre.remove(m-1);
		cod.remove(m-1);
		ciudad.remove(m-1);
	}

	public void mostrar(){
		Scanner sc = new Scanner(System.in);
		int m;
		System.out.println( "Ingrese el registro a mostrar" );
		m = sc.nextInt();
		m = m-1;
		System.out.println( nombre.get(m) );
		System.out.println( cod.get(m) );
		System.out.println( ciudad.get(m) );
	}

	public void opciones(){
		Sistema sis = new Sistema();
		Scanner sc = new Scanner(System.in);
		int op;
		System.out.println( "Ingrese la opcion correspondiente ");
		System.out.println( "1.- Registrar ");
		System.out.println( "2.- mostrar" );
		System.out.println( "3.- Eliminar ");
		System.out.println( "4.- Salir" );
		
		do{
			op = sc.nextInt();
			switch(op){
			case 1: sis.registrar(); break;
			case 2: sis.mostrar(); break;
			case 3: sis.eliminar(); break;
			case 4: break; 
			}	
		}while(op!=4);
		

	}
}