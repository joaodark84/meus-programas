import java.util.Scanner;
public class palindromo{
	public static boolean checaPalindromo(String frase){
		int cont= frase.length()-1;
		for(int i=0;i<cont;i++,cont--){
			if(frase.charAt(i)!= frase.charAt(cont)){
				return false;
			}
		}
		return true;
	}
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		String frase=" ";
		while(frase.equals("FIM")==false){
			frase=sc.nextLine();
			if(frase.equals("FIM")==true){
				break;
			}
			if(checaPalindromo(frase)==true){
				System.out.print("SIM\n");
			}
			else{
				System.out.print("NAO\n");	
			}
		}
		sc.close();
	}
}
	
