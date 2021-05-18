import java.util.Scanner;

/**
 * Первая строка входа содержит целые числа 1≤W≤10^4 и 1≤n≤300 — вместимость рюкзака и число золотых слитков.
 * Следующая строка содержит n целых чисел 0≤w1,…,wn≤10^5, задающих веса слитков.
 * Найдите максимальный вес золота, который можно унести в рюкзаке.
 *
 * @author rassoll
 * @created 03.07.2018
 * @$Author$
 * @$Revision$
 */
public class Main
{
	private static int backpackCapacity;
	private static int[] ingots;

	private static void getInputValues()
	{
		Scanner scanner = new Scanner(System.in);
		backpackCapacity = scanner.nextInt();
		ingots = new int[scanner.nextInt()];
		for (int i = 0; i < ingots.length; i++)
		{
			ingots[i] = scanner.nextInt();
		}
	}

	private static int max(int first, int second)
	{
		return first > second ? first : second;
	}

	public static void main(String[] args)
	{
		getInputValues();

		if (backpackCapacity == 0 || ingots.length == 0)
		{
			System.out.println(0);
		}
		else
		{
			int[][] results = new int[backpackCapacity + 1][ingots.length + 1];
			for (int i = 1; i <= ingots.length; i++)
			{
				for (int w = 1; w <= backpackCapacity; w++)
				{
					results[w][i] = results[w][i - 1];
					if (ingots[i - 1] <= w)
					{
						results[w][i] = max(results[w][i], results[w - ingots[i - 1]][i - 1] + ingots[i - 1]);
					}
				}
			}

			System.out.println(results[backpackCapacity][ingots.length]);
		}
	}
}
