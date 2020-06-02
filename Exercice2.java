import java.awt.Point;

public class Exercice2 {
	public static void main(String[] args) {}
}
class Robot extends Point{
	
	private static final long serialVersionUID = 1L;
	protected string nom;
	protected int x;
	protected int y;
	protected Point p;
	protected String direction;
	public  void Point(int x , int y) {
		this.x=x;
		this.y=y;
	}
	
	
	public void init(string nom ,Point p ) {
		this.nom=nom;
		p=new Point(0,0);
		this.direction="Est";
		
	}
	public void avance() {
		if (this.direction=="Est" ) {
			this.x=+1;}
		if (this.direction=="Nord") {
			this.y=+1;}
	}
	public void droite() {
		if (this.direction=="Est"){
				this.direction="Sud";
		}
		if (this.direction=="Sud") {
				this.direction="Ouest";
		}
		if (this.direction=="Ouest"){
				this.direction="Nord";
		}
		if (this.direction=="Nord"){
				this.direction="Est";
		}
	}
	public void affiche() {
		System.out.println(nom);
		System.out.println(p);
		System.out.println(direction);
	}

class RobotNG extends Robot{

	
	private static final long serialVersionUID = 1L;
	public void avance(int n ) {
		for (int i=0;i<n;i++) {
			super.avance();
		}
	}
	public void gauche() {
		for (int i=0; i<3;i++) {
			super.droite();
		}
	}
	public void demiTour() {
		for (int i=0;i<3;i++) {
			super.droite();
		}
	}
}
}
