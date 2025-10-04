binary = "1100110110111011100100001110011111101101100101110001101100111000011001101100011100111100001101000010110011001110001101110001100011001011100010110001101100101110011001010011001001101111001110011101001100011010110011001101100010100001110011100111100110011101110011111001000111001111001110110010101011001101011001110001011101110010011011110111001001110010111100010001"

def try_insert_bit(binary_str, pos, bit):
    new_binary = binary_str[:pos] + bit + binary_str[pos:]
    # Pad to multiple of 8
    while len(new_binary) % 8 != 0:
        new_binary += '0'
    
    # Convert to ASCII
    result = ''
    for i in range(0, len(new_binary), 8):
        byte = new_binary[i:i+8]
        result += chr(int(byte, 2))
    return result

# Try inserting '0' or '1' at each position
for pos in range(len(binary) + 1):
    for bit in ['0', '1']:
        text = try_insert_bit(binary, pos, bit)
        if 'flag' in text.lower() or 'ctf' in text.lower():
            print(f"Position {pos}, bit '{bit}': {text}")