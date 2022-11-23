import unittest
import main

class SetStateTests(unittest.TestCase):
    def setup(self):
        self.initPos = [0, 0]
        self.endPos = [1, 1]
        self.array = []
        i = 0
        while i < 3:
            sub_array = []
            j = 0
            while j < 3:
                sub_array.append(False)
                j += 1
            self.array.append(sub_array)
            i += 1

    def test_first(self):
        self.setup()
        main.set_state(self.initPos, self.endPos, True, self.array) 
        print(self.array)
        true_array = [
            [True, True, False],
            [True, True, False],
            [False, False, False]
        ]
        self.assertEqual(self.array, true_array)
    
    def test_toggle(self):
        self.setup()
        main.toggle_state(self.initPos, self.endPos, self.array)
        self.array[0][0] = True
        true_array = [
            [False, True, False],
            [True, True, False],
            [False, False, False]
        ]
        self.assertEqual(self.array, true_array)

if __name__ == "__main__":
    unittest.main()