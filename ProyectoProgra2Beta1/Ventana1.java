import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

public class Ventana1 extends JFrame{
	
	JLabel myLabel1 = new JLabel( "Bienvenido Usuario" );
	JLabel myLabel2 = new JLabel("Modificar Registros");
	JButton register = new JButton("Registar nuevo  usuario");
	JButton erase = new JButton("Borrar usuario");
	JButton ingresar = new JButton("Ingresar a información de usuario");
	JPanel panel = new JPanel();



	Ventana1(){
		super("Accesibilidad de datos");

		//Tamaño y Posicion
		setSize(1080,1024);
		setLocation(500,280);
		panel.setLayout(null);

		/*
		//Etiquetas	
		//Posicion myLabel1
		myLabel1.setBounds(70,50,150,60);
		//Añadir myLabel1
		panel.add(myLabel1);

		//Posicion myLabel2
		myLabel2.setBounds(70,30,150,20);
		//Añadir myLabel1
		panel.add(myLabel2);
		*/
		
		mE m = new mE();
		//Botones
		//Posicion boton registrar
		register.setBounds(50,50,150,20);
		//Añadir boton registrar
		panel.add(register);
		register.addActionListener(m);
		//Posicion boton borrar
		erase.setBounds(50,30,150,20);
		//Añadir boton borrar
		panel.add(erase);
		erase.addActionListener(m);
		//Posicion boton ingresar
		ingresar.setBounds(50,10,150,20);
		//Añadir boton ingresar
		panel.add(ingresar);
		ingresar.addActionListener(m);




		//Añadir Panel
		getContentPane().add(panel);

		//Comando de Cerrado
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		setVisible(true);

	}

	class mE implements ActionListener{
		public void actionPerformed(ActionEvent e){
			JButton prueba = new JButton();
			prueba = (JButton)e.getSource();
			if(prueba == register){
				JOptionPane.showMessageDialog(null,"Usted presiono el boton para registrar");
				setVisible(false);
			}
			if(prueba == ingresar){
				JOptionPane.showMessageDialog(null,"Usted presiono el boton para ingresar");
				setVisible(false);
			}
			if(prueba == erase){
				JOptionPane.showMessageDialog(null,"Usted presiono el boton para eliminar");
				setVisible(false);
			}
		}

	}


}