bool isPerfectSquare(int num) {
        for (long long i = 1; i * i <= num; i++) {
            if (i * i == num) {
                return true;
            }
            else if (i * i > num) {
                return false;
            }
        }
        return false;
    }