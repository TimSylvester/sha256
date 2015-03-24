#include <stdint.h>
#include <stdio.h>
#include <array>
#include <bitcoin/bitcoin/math/external/sha256.h>

int main(int /*argc*/, char* /*argv*/[])
{
	std::array<uint8_t, SHA256_DIGEST_LENGTH> zeros = {{
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
	}};
	std::array<uint8_t, SHA256_DIGEST_LENGTH> data = {{
		0x32, 0xc7, 0xdd, 0x4d, 0xa0, 0xd6, 0x1c, 0x46, 0xfd, 0x5f, 0x44, 0x49, 0x2c, 0x11, 0xff, 0x8a,
		0x87, 0x77, 0xcb, 0x13, 0x4f, 0x95, 0xb1, 0x64, 0xc6, 0xde, 0x4e, 0x9f, 0xfc, 0xbb, 0x5f, 0x0f
	}};

	std::array<uint8_t, SHA256_DIGEST_LENGTH> result;
	SHA256(zeros.data(), zeros.size(), result.data());
	for (size_t i = 0; i < SHA256_DIGEST_LENGTH; ++i)
	{
		printf("%02x", result[i]);
	}
	printf("\n");

	SHA256(data.data(), data.size(), result.data());
	for (size_t i = 0; i < SHA256_DIGEST_LENGTH; ++i)
	{
		printf("%02x", result[i]);
	}
	printf("\n");

	return 0;
}

