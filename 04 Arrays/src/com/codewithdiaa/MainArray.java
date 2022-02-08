package com.codewithdiaa;

import java.util.Arrays;

public class MainArray {
    public static void main(String[] args) {
        int[] numbers = new int[3];
        numbers[0] = 10;
        numbers[1] = 20;
        numbers[2] = 30;
//        System.out.println(Arrays.toString(numbers));
        for (int i = 0; i < numbers.length; i++)
            if (numbers[i] == 21)
                System.out.println(numbers[i]);

        for (int number : numbers)
            if (number == 20)
                System.out.println(number);
    }

    public void greet(String[] names) {
        System.out.println(names[1]); // O(1)
        for (int i = 0; i < names.length; i++) // O(n)
            System.out.println(names[i]);
    }
}