import unittest
import power

class TestPower(unittest.TestCase):

    def test_power(self):
        self.assertEqual(power.power(2,10), 1024)
        self.assertEqual(power.power(3,4), 81)

if __name__ == '__main__':
    unittest.main()