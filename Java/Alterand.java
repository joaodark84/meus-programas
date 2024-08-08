import java.util.Scanner;
import java.util.Random;
public class Alterand{
	public static String substituiRand(String args){
		Random rand = new Random(4);
		int tam=args.length();
		char substitituido = (char)('a'+rand.nextInt(26));
        char substituto = (char)('a'+rand.nextInt(26));
		StringBuilder sb = new StringBuilder(args);
		for(int i=0;i<tam;i++){
			if(args.charAt(i) == substitituido){
                sb.setCharAt(i,substituto);
            }
		}
		return sb.toString();
	}
	public static void main(String args[]){
		Scanner sc=new Scanner(System.in);
		String palavra=" ";
		
		while(!(palavra.equals("FIM"))){
			palavra=sc.nextLine();
			if(!(palavra.equals("FIM"))){
				System.out.println(" "+substituiRand(palavra));
			}
		}
	}
}