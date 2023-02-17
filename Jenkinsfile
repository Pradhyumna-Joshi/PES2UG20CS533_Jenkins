pipeline {
  agent any

  stages {
    stage('Build') {
      steps {
        sh 'g++ Calculator.cpp -o Calculator'
      }
    }
   
    stage('Test') {
      steps {
        sh './Calculator'
      }
    }
   
    stage('Deploy') {
      steps {
      }
    }
  }
 
  post {
    failure {
       
          echo 'Pipeline failed'
        }
    }
   
  }
