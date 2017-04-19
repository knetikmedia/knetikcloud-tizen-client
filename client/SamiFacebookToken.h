/*
 * SamiFacebookToken.h
 * 
 * 
 */

#ifndef SamiFacebookToken_H_
#define SamiFacebookToken_H_

#include <FApp.h>
#include <FBase.h>
#include <FSystem.h>
#include <FWebJson.h>
#include "SamiHelpers.h"
#include "SamiObject.h"

using namespace Tizen::Web::Json;


using Tizen::Base::String;


namespace Swagger {

class SamiFacebookToken: public SamiObject {
public:
    SamiFacebookToken();
    SamiFacebookToken(String* json);
    virtual ~SamiFacebookToken();

    void init();

    void cleanup();

    String asJson ();

    JsonObject* asJsonObject();

    void fromJsonObject(IJsonValue* json);

    SamiFacebookToken* fromJson(String* obj);

    String* getPAccessToken();
    void setPAccessToken(String* pAccess_token);

private:
    String* pAccess_token;
};

} /* namespace Swagger */

#endif /* SamiFacebookToken_H_ */
