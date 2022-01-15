// generated by C:/ffxi/server/build/_deps/sqlpp11-src/scripts/ddl2cpp -split-tables -no-timestamp-warning -fail-on-parse xidb.sql ../src/database xidb
#ifndef XIDB_ABILITIES_H
#define XIDB_ABILITIES_H

#include <sqlpp11/table.h>
#include <sqlpp11/data_types.h>
#include <sqlpp11/char_sequence.h>

namespace xidb
{
  namespace Abilities_
  {
    struct AbilityId
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "abilityId";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T abilityId;
            T& operator()() { return abilityId; }
            const T& operator()() const { return abilityId; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::smallint_unsigned, sqlpp::tag::can_be_null>;
    };
    struct Name
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "name";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T name;
            T& operator()() { return name; }
            const T& operator()() const { return name; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::text, sqlpp::tag::can_be_null>;
    };
    struct Job
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "job";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T job;
            T& operator()() { return job; }
            const T& operator()() const { return job; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::tinyint_unsigned>;
    };
    struct Level
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "level";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T level;
            T& operator()() { return level; }
            const T& operator()() const { return level; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::tinyint_unsigned>;
    };
    struct ValidTarget
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "validTarget";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T validTarget;
            T& operator()() { return validTarget; }
            const T& operator()() const { return validTarget; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::smallint_unsigned>;
    };
    struct RecastTime
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "recastTime";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T recastTime;
            T& operator()() { return recastTime; }
            const T& operator()() const { return recastTime; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::smallint_unsigned>;
    };
    struct RecastId
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "recastId";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T recastId;
            T& operator()() { return recastId; }
            const T& operator()() const { return recastId; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::smallint_unsigned>;
    };
    struct Message1
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "message1";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T message1;
            T& operator()() { return message1; }
            const T& operator()() const { return message1; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::smallint_unsigned>;
    };
    struct Message2
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "message2";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T message2;
            T& operator()() { return message2; }
            const T& operator()() const { return message2; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::smallint_unsigned>;
    };
    struct Animation
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "animation";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T animation;
            T& operator()() { return animation; }
            const T& operator()() const { return animation; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::smallint_unsigned>;
    };
    struct AnimationTime
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "animationTime";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T animationTime;
            T& operator()() { return animationTime; }
            const T& operator()() const { return animationTime; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::smallint_unsigned>;
    };
    struct CastTime
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "castTime";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T castTime;
            T& operator()() { return castTime; }
            const T& operator()() const { return castTime; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::smallint_unsigned>;
    };
    struct ActionType
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "actionType";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T actionType;
            T& operator()() { return actionType; }
            const T& operator()() const { return actionType; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::tinyint_unsigned>;
    };
    struct Range
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "range";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T range;
            T& operator()() { return range; }
            const T& operator()() const { return range; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::floating_point>;
    };
    struct IsAOE
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "isAOE";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T isAOE;
            T& operator()() { return isAOE; }
            const T& operator()() const { return isAOE; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::tinyint_unsigned>;
    };
    struct CE
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "CE";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T CE;
            T& operator()() { return CE; }
            const T& operator()() const { return CE; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::smallint>;
    };
    struct VE
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "VE";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T VE;
            T& operator()() { return VE; }
            const T& operator()() const { return VE; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::smallint>;
    };
    struct MeritModID
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "meritModID";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T meritModID;
            T& operator()() { return meritModID; }
            const T& operator()() const { return meritModID; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::smallint>;
    };
    struct AddType
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "addType";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T addType;
            T& operator()() { return addType; }
            const T& operator()() const { return addType; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::smallint>;
    };
    struct ContentTag
    {
      struct _alias_t
      {
        static constexpr const char _literal[] =  "content_tag";
        using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
        template<typename T>
        struct _member_t
          {
            T contentTag;
            T& operator()() { return contentTag; }
            const T& operator()() const { return contentTag; }
          };
      };
      using _traits = sqlpp::make_traits<sqlpp::text, sqlpp::tag::can_be_null>;
    };
  } // namespace Abilities_

  struct Abilities: sqlpp::table_t<Abilities,
               Abilities_::AbilityId,
               Abilities_::Name,
               Abilities_::Job,
               Abilities_::Level,
               Abilities_::ValidTarget,
               Abilities_::RecastTime,
               Abilities_::RecastId,
               Abilities_::Message1,
               Abilities_::Message2,
               Abilities_::Animation,
               Abilities_::AnimationTime,
               Abilities_::CastTime,
               Abilities_::ActionType,
               Abilities_::Range,
               Abilities_::IsAOE,
               Abilities_::CE,
               Abilities_::VE,
               Abilities_::MeritModID,
               Abilities_::AddType,
               Abilities_::ContentTag>
  {
    struct _alias_t
    {
      static constexpr const char _literal[] =  "abilities";
      using _name_t = sqlpp::make_char_sequence<sizeof(_literal), _literal>;
      template<typename T>
      struct _member_t
      {
        T abilities;
        T& operator()() { return abilities; }
        const T& operator()() const { return abilities; }
      };
    };
  };
} // namespace xidb
#endif
