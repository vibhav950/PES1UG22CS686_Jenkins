pipeline {
    agent any
    stages {
      
        stage('Build') {
            steps {
                script {
                    build 'pes1ug22cs686-1'
                    sh 'g++ -o p1 main/p1.cpp'
                }
            }
        }

        stage('Test') {
            steps {
                script {
                    sh './p1' // the correct executble name is p1, but we try to execute p2
                }
            }
        }

        stage('Deploy') {
            steps {
                echo 'Deploying...'
            }
        }
    }

    post {
        failure {
            echo 'Pipeline failed... please fix all errors!'
        }
    }
}
