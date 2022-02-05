package com.codewithdiaa;

public class Main {
    public static void main(String[] args) {
        int numbers[] = new int[3];
    }

    public void greet(String[] names) {
        // O(1) space
        String[] copy = new String[names.length];
        // O(n) space
        for (String name:names)
            System.out.println("Hi "+name);
    }
}