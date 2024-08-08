import java.util.Scanner;

public class palindromoRecursivo {
	public static boolean ChecaPalin(String palavra, int i, int j) {
		if (i >= j) {
			return true;
		}//mudei
		if (palavra.charAt(i) != palavra.charAt(j)) {
			return false;
		}
		return ChecaPalin(palavra, i + 1, j - 1);
	}

	public static void main(String args[]) {
		Scanner sc = new Scanner(System.in);
		String palavra = " ";
		int i = 0, j;
		while (palavra.equals("FIM") == false) {
			palavra = sc.nextLine();
			if (palavra.equals("FIM") == true) {
			} else if (ChecaPalin(palavra, i, j = palavra.length() - 1) == true) {
				System.out.print("SIM\n");
			} else {
				System.out.print("NAO\n");
			}
		}
	}
}