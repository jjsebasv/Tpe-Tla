
float getSalary(struct Employee e, int lapse, char* timelapse) {
	int t = lapse;
	if (strcmp(timelapse, "weeks") == 0) {
		t /= 4;
		t *= lapse;
	} else if (strcmp(timelapse, "years") == 0) {
		t *= 12;
		t *= lapse;
	} else if (strcmp(timelapse, "month") == 0) {
		t *= lapse;
	} else {
		printf("ERROR\n");
		return -1;
	}
	return t;
}
