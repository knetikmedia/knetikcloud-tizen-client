/*
 * SamiS3Config.h
 * 
 * 
 */

#ifndef SamiS3Config_H_
#define SamiS3Config_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::String;


namespace Swagger {

class SamiS3Config: public SamiObject {
public:
    SamiS3Config();
    SamiS3Config(String* json);
    virtual ~SamiS3Config();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiS3Config* fromJson(String* obj);

    String* getPBucketName();
    void setPBucketName(String* pBucket_name);
    String* getPCdnUrl();
    void setPCdnUrl(String* pCdn_url);
    String* getPRegion();
    void setPRegion(String* pRegion);
    String* getPUploadPrefix();
    void setPUploadPrefix(String* pUpload_prefix);

private:
    String* pBucket_name;
String* pCdn_url;
String* pRegion;
String* pUpload_prefix;
};

} /* namespace Swagger */

#endif /* SamiS3Config_H_ */
