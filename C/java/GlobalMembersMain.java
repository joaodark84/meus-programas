public class GlobalMembersMain
{

	public static int Main()
	{
		int x;
		System.out.print(digite seu limite:);
		x = Integer.parseInt(ConsoleInput.readToWhiteSpace(true));
		for (int i = 0;i <= x;i++)
		{
			if (i % 2 == 0)
			{
				System.out.print(i);
			}
				System.out.print(end1);
		}
		return 0;
	}
}