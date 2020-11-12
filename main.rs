fn insertion_sort<T: Ord>(arr: &mut [T]) {
    for i in 1..arr.len() {
        let mut j = i;
        while j > 0 && arr[j] < arr[j-1] {
            arr.swap(j, j-1);
            j = j - 1;
        }
    }
}
fn main() {
    let mut arr = [51, 42, 51, 5, 8, 7, 9, 12];
    println!("Before: {:?}", arr);

    insertion_sort(&mut arr);
    println!("After: {:?}", arr);
}
