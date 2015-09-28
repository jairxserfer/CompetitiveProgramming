import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

public class Login2 extends JFrame{
	JPanel panel = new JPanel();
	JTextField user = new JTextField(15);
	JPasswordField pass = new JPasswordField(15);
	JButton acep = new JButton("Aceptar");

	Login2(){

		//Ubicación y tamaño de la interfaz
		super("Loogearse");
		setSize(300,200);
		setLocation(500,280);
		panel.setLayout(null);


		//Posiciones del cada cosa
		user.setBounds(70,30,150,20);
		pass.setBounds(70,65,150,20);
		acep.setBounds(110,100,80,20);


		//Añadir al panel
		panel.add(user);
		panel.add(pass);
		panel.add(acep);

		//Añadir el panel
		getContentPane().add(panel);
		//Como se cierra
		setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
		
		//Se hace visible la clase
		setVisible(true);

		//Se llama al método de logeo
		actionlogin();
	}

	public void actionlogin(){
		acep.addActionListener(new ActionListener(){
			public void actionPerformed(ActionEvent e){
				String usr = new String("jairxserfer");
				String ctr = new String("rajahajo");
				String us = user.getText();
				String ps = pass.getText();

				if(us.equals(usr) && ps.equals(ctr)){
					Ventana1 ven = new Ventana1();
					//JOptionPane.showMessageDialog(null,"Contrasenia Correct");
				} else{
					JOptionPane.showMessageDialog(null,"Contrasenia Incorrect");
					user.setText("");
					pass.setText("");
					user.requestFocus();
				}
			}



		}


			);
	}

}