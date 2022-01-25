#pragma once

#include <ReadBufferInterface.h>
#include <WriteBufferInterface.h>

#include <array>

namespace koinos {

   class read_buffer : public EmbeddedProto::ReadBufferInterface
   {
      const uint8_t* _buffer;
      uint32_t _len;
      uint32_t _pos = 0;

      public:
         read_buffer( const uint8_t* buffer, uint32_t len );

         //! Return the number of bytes remaining.
         virtual uint32_t get_size() const override final;

         //! Obtain the total number of bytes which can at most be stored in the buffer.
         /*!
         In the case of this buffer section this will return the size of the section.
         */
         virtual uint32_t get_max_size() const override final;

         //! Expose the function of the parent buffer.
         /*!
         This will not do anything if size zero is reached.
         */
         virtual bool peek(uint8_t& byte) const override final;

         //! Decrement the size and call advance on the parent buffer.
         /*!
         This will not do anything if size zero is reached.
         */
         virtual void advance() override final;

         //! Decrement the size by N bytes and call advance on the parent buffer.
         /*!
         This will not do anything if size zero is reached.
         */
         virtual void advance(const uint32_t N) override final;

         //! Decrement the size and pop the next byte from the parent buffer.
         /*!
         This will not do anything if size zero is reached.
         */
         virtual bool pop(uint8_t& byte) override final;

         //! Get a pointer to the beginning of the buffer.
         const uint8_t* data() const;
   };

   class write_buffer : public EmbeddedProto::WriteBufferInterface
   {
      uint8_t* _buffer;
      uint32_t _len;
      uint32_t _pos = 0;

      public:
         write_buffer( uint8_t* buffer, uint32_t len );

         //! Delete all data in the buffer.
         virtual void clear() override final;

         //! Obtain the total number of bytes currently stored in the buffer.
         virtual uint32_t get_size() const override final;

         //! Obtain the total number of bytes which can at most be stored in the buffer.
         virtual uint32_t get_max_size() const override final;

         //! Obtain the total number of bytes still available in the buffer.
         virtual uint32_t get_available_size() const override final;

         //! Push a single byte into the buffer.
         /*!
            \param[in] byte The data to append after previously added data in the buffer.
            \return True when there was space to add the byte.
         */
         virtual bool push(const uint8_t byte) override final;

         //! Push an array of bytes into the buffer.
         /*!
            The given array will be appended after already addded data in the buffer.
            \param[in] bytes Pointer to the array of bytes.
            \param[in] length The number of bytes in the array.
            \return True when there was space to add the bytes.
         */
         virtual bool push(const uint8_t* bytes, const uint32_t length) override final;

         //! Get a pointer to the beginning of the buffer.
         uint8_t* data();
   };

   class rw_buffer final : public write_buffer, public read_buffer
   {
      public:
         rw_buffer( uint8_t* buffer, uint32_t len );
   };

} // koinos
