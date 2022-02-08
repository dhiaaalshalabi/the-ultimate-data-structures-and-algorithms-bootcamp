package com.codewithdiaa;

public class MyArray {
    private int[] items;
    int count;

    public MyArray(int length) {
        items = new int[length];
    }

    public void print() {
        for (int i = 0; i < count; i++)
            System.out.println(items[i]);
    }

    public void size() {
        System.out.println(count);
    }

    public void insert(int item) {
        if (items.length == count) { // count ==4
            int[] newItems = new int[count * 2];
            for (int i = 0; i < count; i++)
                newItems[i] = items[i];
            items = newItems;
        }
        items[count++] = item;
    }
}
