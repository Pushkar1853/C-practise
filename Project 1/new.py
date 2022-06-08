import numpy as np
from sklearn.preprocessing import StandardScaler
from numpy.linalg import eig
#
# Percentage of marks and no. of hours studied
#
students = np.array([[85.4, 5],
            [82.3, 6],
            [97, 7],
            [96.5, 6.5]])
#
# Scale the features
#
sc = StandardScaler()
students_scaled = sc.fit_transform(students)
#
# Calculate covariance matrix; One can also use the following
# code: np.cov(students_scaled, rowvar=False)
#
cov_matrix = np.cov(students_scaled.T)
#
# Calculate Eigenvalues and Eigenmatrix
#
eigenvalues, eigenvectors = eig(cov_matrix)