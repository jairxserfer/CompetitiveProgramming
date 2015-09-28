import javax.swing.*;
import java.awt.*;
import java.awt.event.*;


public class myFrame extends JPanel{

	public myFrame(){
		initComponents();
		frameFondo pnlfondo = new frameFondo();
		this.add(pnlfondo, BorderLayout.CENTER);
		this.pack();
	}


}