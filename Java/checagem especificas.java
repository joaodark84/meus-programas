import java.util.Scanner;
public class ChecagemS {
    public static int checaTam(String args){
            return args.length();
    }
    public static Boolean checaVogal(String args,int tam){
        for(int i=0;i<tam;i++){
            if(args.charAt(i)!='a'&&args.charAt(i)!='A'args.charAt(i)!='e'&&args.charAt(i)!='E'&&args.charAt(i)!='i'&&args.charAt(i)!='I'&&args.charAt(i)!='o'&&args.charAt(i)!='O'&&args.charAt(i)!='u'&&args.charAt(i)!='U')
            return false;
        }
        return true;
    }
    public static Boolean checaCons(String args,int tam){
        for(int i=0;i<tam;i++){
            if(args.charAt(i)=='a'&&args.charAt(i)=='A'args.charAt(i)=='e'&&args.charAt(i)=='E'&&args.charAt(i)=='i'&&args.charAt(i)=='I'&&args.charAt(i)=='o'&&args.charAt(i)=='O'&&args.charAt(i)=='u'&&args.charAt(i)=='U')
            return false;
        }
        return true;
    }
    public static Boolean checaInt(String args,int tam){
        for(int i=0;i<tam;i++){
            if(args.charAt(i)>0 && args.charAt(i)<9)
            return false;
        }
        return true;
    }
    public static Boolean checaReal(String args,int tam){
        for(int i=0;i<tam;i++){
            if(args.charAt(i)<0 && args.charAt(i)>9 && args.charAt(i)!='.'||args.charAt(i)!=','){
                return false;
            }
        }
        return true;
    }
    public static void main(String args[]){
        String palavra=" ";
        Boolean X1,X2,X3,X4;
        int tam;
        Scanner sc=new Scanner(System.in);
        while(palavra.equals("FIM")==false){
            palavra = sc.nextLine();
            tam=checaTam(palavra);
            X1=checaVogal(palavra,tam);
            X2=checaCons(palavra,tam);
            X3=checaInt(palavra,tam);
            X4=checaReal(palavra,tam);
            System.out.println(""+X1+X2+X3+X4);
        }
        sc.close();
    }
}
