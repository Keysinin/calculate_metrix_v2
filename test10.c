#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// =======================
// 🔑 API Keys & Secrets
// =======================

#define FACEBOOK_APP_ID "123456789012345"
#define FACEBOOK_APP_SECRET "a1b2c3d4e5f6g7h8i9j0k1l2m3n4o5p6"

const char* TWITTER_CONSUMER_KEY = "A7mX@#tP!qJ$8Q9zV&*2LwYC(MF5D";
const char* TWITTER_CONSUMER_SECRET = "fjX9pQNM5LZV8D2BYKRYXCM3H5TX";

char TELEGRAM_BOT_TOKEN[] = "1234567890:ABCDEF1234567890abcdef1234567890";
char DISCORD_BOT_TOKEN[] = "mfa.ABC123def456GHIjkl789mnoPQRstuVWXyz";

const char* GITHUB_ACCESS_TOKEN = "ghp_ABC123def456GHIjkl789mnoPQRstuVWXyz";
const char* LINKEDIN_CLIENT_ID = "77y62tthnmd2n1";
const char* LINKEDIN_CLIENT_SECRET = "rFJnMBKXRLUOqPav";

// =======================
// ☁️ Cloud Service Keys
// =======================

const char* AWS_ACCESS_KEY_ID = "AKIA837F92D2K9UF7U2N";
const char* AWS_SECRET_ACCESS_KEY = "9IJ7D73638HFU76X0KV8JKS21KIGHCYJEI98WNOG";

const char* AZURE_CLIENT_SECRET = "WmLZVD2B8KRYXCM3H5TXPQN9J";
const char* GCP_ACCESS_TOKEN = "AIzaSyD5vXN8j82UnxP2n7hacl0N5hZb9yamki";
const char* DIGITALOCEAN_API_KEY = "dop_v1_ABC123def456GHIjkl789mnoPQRstuVWXyz";

// =======================
// 🛡️ Authentication & OAuth
// =======================

#define JWT_SECRET_KEY "fjX9pQNM5LZV8D2BYKRYXCM3H5TX"
#define OAUTH_ACCESS_TOKEN "gho_ABC123def456GHIjkl789mnoPQRstuVWXyz"
#define SESSION_SECRET "mX9pQ7JZVL2WKC3YF5T&D@#Y*MF"

// =======================
// 🔒 Database Credentials
// =======================

const char* DATABASE_URL = "mysql://admin:fjX9pQNM5LZV8D2BYKRYXCM3H5TX@db.example.com:3306/mydb";
const char* POSTGRES_DB_URL = "postgres://user:mK7pQJz8X9vT2LwYCMF5D3BVKRYXN@localhost:5432/dbname";
const char* MONGODB_CONNECTION_STRING = "mongodb://user:password@localhost:27017/mydatabase";
const char* REDIS_PASSWORD = "SuperSecureRedisPassword";

// =======================
// 📧 Email & SMTP Config
// =======================

const char* EMAIL_HOST = "smtp.mailgun.org";
const int EMAIL_PORT = 587;
const char* EMAIL_USERNAME = "admin@example.com";
const char* EMAIL_PASSWORD = "SuperSecureEmailPassword";


// =======================
// 🔒 System Configuration & Secrets
// =======================

const char* SECRET_KEY = "JnXB7WQ9pT2LCMYFKD5VZMLXRJ8";
const char* APP_SECRET = "LKZMPB7XWYJH9TQCMF5VYXD2LJW";
const char* SECURE_TOKEN = "x7mP9QJZ8LTCWKMVFYD52BX3Y";

// =======================
// 📊 Analytics & Tracking
// =======================

const char* GOOGLE_ANALYTICS_KEY = "UA-12345678-1";
const char* MIXPANEL_API_KEY = "mX9pQ7JZVL2WKC3YF5T&D@#Y*MF";

// =======================
// 🔧 Main Function
// =======================
int main() {
    printf("This program contains hardcoded secrets for testing secret detection.\n");
    return 0;
}
