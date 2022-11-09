# Script that modifies the open file descriptor limit for user holberton

exec { 'fix ulimit':
  command  => 'sed -i "56,57d" /etc/security/limits.conf',
  provider => 'shell'
}
