pipeline
{
    agent any
    stages
    {
      stage ("fetching code")
      {
        steps
        {
          git 'https://github.com/VTfreshers/hema_c.git'
        }
      }
      stage ("building")
      {
        steps
        {
            sh './gcc_shell.sh'
        }
      }
    }
}
