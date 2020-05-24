use proconio::input;


fn main() {
    input! {
        n: i32,
    };

    let mut ans: i128 = 0;
    for i in 1..n+1 {
        if i % 3 == 0 || i % 5 == 0 {
            continue;
        }
        ans += i as i128;
    }

    print!("{}\n", ans);
}
