use proconio::input;

fn main() {
    input! {
        a: i32,
        b: i32,
    };

    let ans = (b + a - 3) / (a - 1);
    print!("{}", ans);
}
