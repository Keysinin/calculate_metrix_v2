class TestCommon(unittest.TestCase):
    def setUp(self):
        self.common = Common()
    
    def test_generate_new_profile_list(self):
        test_data = {
                            'default': 
                                {
                                    'aws_access_key_id': 'AKIA837F92D2K9UF7U2N',
                                    'aws_secret_access_key': '9IJ7D73638HFU76X0KV8JKS21KIGHCYJEI98WNOG'
                                }
                            }
        expected_output = {
                            'default': 
                                {
                                    'aws_access_key_id': 'AKIAZZZZZZZZZZZZZZZZ',
                                    'aws_secret_access_key': 'zZzZzZzZzZzZzZzZzZzZzZzZzZzZzZzZzZzZzZzZ'
                                },
                            'test1': 
                                {
                                    'aws_access_key_id': 'AKIAZZZZZZZZZZZZZZZZ',
                                    'aws_secret_access_key': 'zZzZzZzZzZzZzZzZzZzZzZzZzZzZzZzZzZzZzZzZ'
                                }
                            }
        self.assertDictEqual(self.common.generate_new_profile_list(test_data, 'test1'), expected_output)

    def test_aws_access_key_id_with_valid_value(self):
        self.assertTrue(self.common.aws_access_key_id_is_valid('AKIAAAAAAAAAAAAAAAAA'))

    def test_aws_access_key_id_with_invalid_value(self):
        self.assertFalse(self.common.aws_access_key_id_is_valid('AKIAAAAAAAAAAAAAAAA'))

    def test_aws_secret_access_key_with_valid_value(self):
        self.assertTrue(self.common.aws_secret_access_key_is_valid('Aa1Aa0az00+AzA/01AzZZZz0Z0z0ZzzZZzZZz0zZ'))

    def test_aws_secret_access_key_with_invalid_value(self):
        self.assertFalse(self.common.aws_secret_access_key_is_valid('0ZzzZZzZZz0zZ'))
        
debug_token = "DEBUG_abcdefgh1234567"  # Тестовий токен, який не є чутливим

dummy_password = "supersecurepassword"  # Немає реальної загрози, використовується як приклад

gitlab_secret = "CI_JOB_TOKEN"  # GitLab змінна оточення, яка не є секретом

fake_stripe_key = "sk_test_51Hn2W6D5xxEXAMPLE5sX9cJpt"  # Тестовий Stripe API ключ

oauth_placeholder = "oauth1234567890"  # Виглядає як OAuth токен, але не є ним

sample_encryption_key = "1234567890abcdef1234567890abcdef"  # Виглядає як 256-бітний ключ, але не є справжнім

localhost_secret = "http://localhost:3000/api-key"  # Локальне API, яке не несе загрози

empty_api_key = "AAAAAAAAAAAAAAAAAAAAAAAAAAAAAAAA"  # Не є справжнім ключем, але може бути неправильно визначеним

test_var = "XXXXXXXXXXXXXX"  # Шаблонне значення, яке часто помилково визначається як секрет


if __name__ == '__main__':
    unittest.main()