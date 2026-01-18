package main

import (
	"bufio"
	"fmt"
	"math"
	"os"
)

var MOD int64 = 998244353

func solve() {
	var l, r int64

	fmt.Fscan(stdin, &l, &r)

	var maxSize int64 = 1

	lc, rc := l, r

	for lc*2 <= rc {
		lc *= 2
		maxSize++
	}

	var lo, hi int64 = l, r

	var p2 int64 = int64(math.Pow(2, float64(maxSize)-1))

	for lo < hi {
		mid := (lo + hi + 1) / 2

		if p2*mid <= r {
			lo = mid
		} else {
			hi = mid - 1
		}
	}

	ans := lo - l + 1

	lo, hi, p2 = l-1, r, (p2/2)*3

	for lo < hi {
		mid := (lo + hi + 1) / 2

		if p2*mid <= r {
			lo = mid
		} else {
			hi = mid - 1
		}
	}

	if lo >= l {
		ans += (lo - l + 1) * (maxSize - 1)
	}

	ans = ans % int64(MOD)

	fmt.Println(maxSize, ans)
}

func main() {
	t := 1
	fmt.Scan(&t) // &t, here & means address of t

	for t > 0 {
		solve()
		t--
	}
}

/* ------------------------------------------------------ */

// io
var stdin = bufio.NewReader(os.Stdin)
