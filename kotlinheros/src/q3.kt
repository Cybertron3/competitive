import java.math.BigInteger
import kotlin.math.max
import kotlin.math.min

fun main() {
    var t = readInt()

    while (t-- != 0) {

        var firstline = readInts()
        var n = firstline[0]
        var k = firstline[1]

        var arr = readInts()


        var i = k
        var ans = 0
        while(n-i >= 0){
            var sum = 0
            var till = i/k
            var j = 0
            while(j < till){
                sum += arr[n-i + j]
                j++
            }
            if(ans < sum ){
                ans = sum
            }
            i += k
        }

        println(ans)


    }
}



private fun readLn() = readLine()!! // string line
private fun readInt() = readLn().toInt() // single int
private fun readStrings() = readLn().split(" ") // list of strings
private fun readInts() = readStrings().map { it.toInt() } // list of ints