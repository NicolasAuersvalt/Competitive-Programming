import java.util.Scanner;

public class Main{
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		double val1 = sc.nextDouble();
		double val2 = sc.nextDouble();

		// Imprime a media com 5 casas de precisao
		System.out.printf("MEDIA = %.5f%n", (val1+val2)/2.00000);
	}

}
