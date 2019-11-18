
const char* greet(int hour, int min)
{
	if (hour >= 24 || hour < 0 || min >= 60 || min < 0) //check the correctness of the entered data
		return "Uncorrect time!";
	else if (hour < 6)
		return "Good night!";
	else if (hour < 11)
		return "Good morning!";
	else if (hour < 18)
		return "Good day!";
	else if (hour <= 23)
		return "Good evening!";
}