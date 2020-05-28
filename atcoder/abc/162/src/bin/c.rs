use proconio::input;


fn gcd(a: i64, b: i64) -> i64 {
    if b == 0 {
        a
    }
    else {
        gcd(b, a % b)
    }
}


fn main() {
    input! {
        k: i64,
    }

    let mut ans: i64 = 0;

    for i in 1..k+1 {
        for j in 1..k+1 {
            for k in 1..k+1 {
                ans += gcd(gcd(i, j), k);
            }
        }
    }

    print!("{}", ans);
}
