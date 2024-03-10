import java.util.Scanner;

public class Xenia {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        int n = scanner.nextInt(); // Number of houses
        int m = scanner.nextInt(); // Number of tasks

        int[] tasks = new int[m];
        for (int i = 0; i < m; i++) {
            tasks[i] = scanner.nextInt();
        }

        long time = 0;
        int currentHouse = 1;

        for (int i = 0; i < m; i++) {
            int destination = tasks[i];

            if (destination >= currentHouse) {
                time += destination - currentHouse;
            } else {
                time += n - currentHouse + destination;
            }

            currentHouse = destination;
        }

        System.out.println(time);

        scanner.close();
    }
}
