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