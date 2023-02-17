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
         sh '/departent/services'
      }
    }
  }
 
  post {
    failure {
       
          echo 'Pipeline failed'
        }
    }
   
  }
