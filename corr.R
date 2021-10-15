corr <- function(directory, threshold = 0) {
    x <- list.files(directory, full.names = TRUE)
    z <- vector(mode = "numeric", length = 0)
    for (i in 1:length(x)) {
        a <- read.csv(x[i])
        p <- a[complete.cases(a),]
        sum_complete <- nrow(p)
        if (sum_complete > threshold){
            z <- c(z, cor(p$sulfate, p$nitrate))
        }
    }
    z
}