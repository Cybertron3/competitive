import java.math.BigInteger
import kotlin.math.max
import kotlin.math.min

fun main() {
    var t = readInt()

    while (t-- != 0) {

        var str = readLn()
        var n = str.length


        var ans = 0
        var i = 0
        while(i < n ) {
            if (str[i] == 'w') {
                ans++;
            }else{

                var v = 0

                while (i < n) {
                    if (str[i] == 'v') {
                        v++;
                        i++
                    } else {
                        i--
                        break
                    }

                }

                ans += (v / 2)
            }
            i++
        }

        println(ans)

//        val arr = ArrayList<Long>()
//
//        var i = 0
//        while (i<n){
//            arr.add(i, temparr[i])
//            i++
//        }
//        arr.sort()
//
//        i = 0
//
//        var ans = 0.toLong()
//        while (i < n){
//            if(ans < (arr[i] * (n-i) ) )  {
//                ans = arr[i] * (n-i)
//            }
//
//            i++;
//        }
//        println(ans);
//        var m = 0.toLong()
//
//        var sum = 0.toLong()
//
//        var i = 0
//        var tmk = 1.toLong()
//        while( i < 4){
//            sum += tmk
//            tmk = tmk * k
//            i++
//
//        }
//
//        var n1 = n / sum;

//        println("${n1} ${n1*k} ${n1*k*k} ${n1*k*k*k}")

    }
}



private fun readLn() = readLine()!! // string line
private fun readInt() = readLn().toInt() // single int
private fun readStrings() = readLn().split(" ") // list of strings
private fun readInts() = readStrings().map { it.toInt() } // list of ints