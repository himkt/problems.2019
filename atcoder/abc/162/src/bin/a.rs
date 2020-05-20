use proconio::input;


fn main() {
    input! {
        n: String,
    }

    if n.contains("7") {
        print!("Yes");
    }
    else {
        print!("No")
    }
}
