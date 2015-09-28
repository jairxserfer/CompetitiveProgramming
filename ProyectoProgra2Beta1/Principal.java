import javax.swing.*;
import java.awt.*;
import java.awt.event.*;


public class Principal extends JFrame{
	

	public static void main(String Arg[]){
		Login2 lo = new Login2();
	}

	JLabel bienvenido = new JLabel( "Bienvenido al sistema" );
	JPanel panel = new JPanel();

	Principal(){

		//Titulo
		super( "Bienvenido" );

		//Posición
		setSize(300,200);
		setLocation(500,280);
		panel.setLayout(null);

		//Posicion
		bienvenido.setBounds( 70, 50,150, 60);
		
		//Añadir a panel
		panel.add(bienvenido);

		//Añadir Panel
		getContentPane().add(panel);

		//Comando de cerrado
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		setVisible(true);
	}

}