#include <stdint.h>
#include <stdio.h>
#include <array>
#include <bitcoin/bitcoin/math/external/sha256.h>

int main(int /*argc*/, char* /*argv*/[])
{
	std::array<uint8_t, SHA256_DIGEST_LENGTH> result;

    SHA256CTX sha256;
    SHA256Init(&sha256);
    SHA256Update(&sha256, (uint8_t const*)"A", 1);
    SHA256Final(&sha256, result.data());

	for (size_t i = 0; i < SHA256_DIGEST_LENGTH; ++i)
	{
		printf("%2x", result[i]);
	}
	printf("\n");

	return 0;
}

