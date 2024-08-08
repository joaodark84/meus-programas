import java.util.Scanner;
public class convertdias{
    public static int converanos(int anos){
        return anos*365;
    }
    public static int convermeses(int meses){
        return meses*30;
    }
    public static void main(String[]args){
        int anos,meses,dias;
        Scanner sc = new Scanner(System.in);
        anos=sc.nextInt();
        meses=sc.nextInt();
        dias=sc.nextInt();
        dias=dias+converanos(anos)+convermeses(meses);
        System.out.println(""+dias);
        sc.close();
    }
}