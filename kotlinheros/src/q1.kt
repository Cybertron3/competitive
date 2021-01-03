
fun main() {
    var inp = readLine()!!.toInt()

    while (inp-- != 0) {
        var n = readLine()!!.toInt()
        var inputarray = readLine()!!.split(" ").map { it.toLong() }


        val Final = ArrayList<Long>()

        var i = 0
        while (i<n){
            Final.add( i ,  inputarray[i])
            i++
        }
        Final.sort()



        var sum = 0.toLong()
        i = 0
        while (i < n){
            if(sum < (Final[i] * (n-i) ) )  {
                sum = Final[i] * (n-i)
            }

            i++;
        }

        println(sum)

    }
}
